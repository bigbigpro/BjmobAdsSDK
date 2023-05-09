
#import <Foundation/Foundation.h>
#import <objc/runtime.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Type encoding's type.
 */
typedef NS_OPTIONS(NSUInteger, MFAdEncodingType) {
    MFAdEncodingTypeMask       = 0xFF, ///< mask of type value
    MFAdEncodingTypeUnknown    = 0, ///< unknown
    MFAdEncodingTypeVoid       = 1, ///< void
    MFAdEncodingTypeBool       = 2, ///< bool
    MFAdEncodingTypeInt8       = 3, ///< char / BOOL
    MFAdEncodingTypeUInt8      = 4, ///< unsigned char
    MFAdEncodingTypeInt16      = 5, ///< short
    MFAdEncodingTypeUInt16     = 6, ///< unsigned short
    MFAdEncodingTypeInt32      = 7, ///< int
    MFAdEncodingTypeUInt32     = 8, ///< unsigned int
    MFAdEncodingTypeInt64      = 9, ///< long long
    MFAdEncodingTypeUInt64     = 10, ///< unsigned long long
    MFAdEncodingTypeFloat      = 11, ///< float
    MFAdEncodingTypeDouble     = 12, ///< double
    MFAdEncodingTypeLongDouble = 13, ///< long double
    MFAdEncodingTypeObject     = 14, ///< id
    MFAdEncodingTypeClass      = 15, ///< Class
    MFAdEncodingTypeSEL        = 16, ///< SEL
    MFAdEncodingTypeBlock      = 17, ///< block
    MFAdEncodingTypePointer    = 18, ///< void*
    MFAdEncodingTypeStruct     = 19, ///< struct
    MFAdEncodingTypeUnion      = 20, ///< union
    MFAdEncodingTypeCString    = 21, ///< char*
    MFAdEncodingTypeCArray     = 22, ///< char[10] (for example)
    
    MFAdEncodingTypeQualifierMask   = 0xFF00,   ///< mask of qualifier
    MFAdEncodingTypeQualifierConst  = 1 << 8,  ///< const
    MFAdEncodingTypeQualifierIn     = 1 << 9,  ///< in
    MFAdEncodingTypeQualifierInout  = 1 << 10, ///< inout
    MFAdEncodingTypeQualifierOut    = 1 << 11, ///< out
    MFAdEncodingTypeQualifierBycopy = 1 << 12, ///< bycopy
    MFAdEncodingTypeQualifierByref  = 1 << 13, ///< byref
    MFAdEncodingTypeQualifierOneway = 1 << 14, ///< oneway
    
    MFAdEncodingTypePropertyMask         = 0xFF0000, ///< mask of property
    MFAdEncodingTypePropertyReadonly     = 1 << 16, ///< readonly
    MFAdEncodingTypePropertyCopy         = 1 << 17, ///< copy
    MFAdEncodingTypePropertyRetain       = 1 << 18, ///< retain
    MFAdEncodingTypePropertyNonatomic    = 1 << 19, ///< nonatomic
    MFAdEncodingTypePropertyWeak         = 1 << 20, ///< weak
    MFAdEncodingTypePropertyCustomGetter = 1 << 21, ///< getter=
    MFAdEncodingTypePropertyCustomSetter = 1 << 22, ///< setter=
    MFAdEncodingTypePropertyDynamic      = 1 << 23, ///< @dynamic
};

MFAdEncodingType MFAdEncodingGetType(const char *typeEncoding);

@interface MFAdClassIvarInfo : NSObject
@property (nonatomic, assign, readonly) Ivar ivar;              ///< ivar opaque struct
@property (nonatomic, strong, readonly) NSString *name;         ///< Ivar's name
@property (nonatomic, assign, readonly) ptrdiff_t offset;       ///< Ivar's offset
@property (nonatomic, strong, readonly) NSString *typeEncoding; ///< Ivar's type encoding
@property (nonatomic, assign, readonly) MFAdEncodingType type;    ///< Ivar's type

- (instancetype)initWithIvar:(Ivar)ivar;
@end


/**
 Method information.
 */
@interface MFAdClassMethodInfo : NSObject
@property (nonatomic, assign, readonly) Method method;                  ///< method opaque struct
@property (nonatomic, strong, readonly) NSString *name;                 ///< method name
@property (nonatomic, assign, readonly) SEL sel;                        ///< method's selector
@property (nonatomic, assign, readonly) IMP imp;                        ///< method's implementation
@property (nonatomic, strong, readonly) NSString *typeEncoding;         ///< method's parameter and return types
@property (nonatomic, strong, readonly) NSString *returnTypeEncoding;   ///< return value's type
@property (nullable, nonatomic, strong, readonly) NSArray<NSString *> *argumentTypeEncodings; ///< array of arguments' type
- (instancetype)initWithMethod:(Method)method;
@end


/**
 Property information.
 */
@interface MFAdClassPropertyInfo : NSObject
@property (nonatomic, assign, readonly) objc_property_t property; ///< property's opaque struct
@property (nonatomic, strong, readonly) NSString *name;           ///< property's name
@property (nonatomic, assign, readonly) MFAdEncodingType type;      ///< property's type
@property (nonatomic, strong, readonly) NSString *typeEncoding;   ///< property's encoding value
@property (nonatomic, strong, readonly) NSString *ivarName;       ///< property's ivar name
@property (nullable, nonatomic, assign, readonly) Class cls;      ///< may be nil
@property (nullable, nonatomic, strong, readonly) NSArray<NSString *> *protocols; ///< may nil
@property (nonatomic, assign, readonly) SEL getter;               ///< getter (nonnull)
@property (nonatomic, assign, readonly) SEL setter;               ///< setter (nonnull)

- (instancetype)initWithProperty:(objc_property_t)property;
@end


/**
 Class information for a class.
 */
@interface MFAdClassInfo : NSObject
@property (nonatomic, assign, readonly) Class cls; ///< class object
@property (nullable, nonatomic, assign, readonly) Class superCls; ///< super class object
@property (nullable, nonatomic, assign, readonly) Class metaCls;  ///< class's meta class object
@property (nonatomic, readonly) BOOL isMeta; ///< whether this class is meta class
@property (nonatomic, strong, readonly) NSString *name; ///< class name
@property (nullable, nonatomic, strong, readonly) MFAdClassInfo *superClassInfo; ///< super class's class info
@property (nullable, nonatomic, strong, readonly) NSDictionary<NSString *, MFAdClassIvarInfo *> *ivarInfos; ///< ivars
@property (nullable, nonatomic, strong, readonly) NSDictionary<NSString *, MFAdClassMethodInfo *> *methodInfos; ///< methods
@property (nullable, nonatomic, strong, readonly) NSDictionary<NSString *, MFAdClassPropertyInfo *> *propertyInfos; ///< properties
- (void)setNeedUpdate;

- (BOOL)needUpdate;

+ (nullable instancetype)classInfoWithClass:(Class)cls;

+ (nullable instancetype)classInfoWithClassName:(NSString *)className;

@end

NS_ASSUME_NONNULL_END
