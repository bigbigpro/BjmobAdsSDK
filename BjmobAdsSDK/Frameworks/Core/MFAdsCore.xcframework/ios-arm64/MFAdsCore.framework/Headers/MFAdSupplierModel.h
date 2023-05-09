//
//  MFAdSupplierModel.h
//

#import <Foundation/Foundation.h>

@class MFAdSupplierModel;
@class MFAdSetting;
@class MFAdSupplier;
typedef NS_ENUM(NSUInteger, MFAdSdkSupplierRepoType) {
   
    /// 广告下载成功
    MFAdSdkSupplierRepoTypeLoadSuccess,
    /// 广告下载失败
    MFAdSdkSupplierRepoTypeLoadFail,
    /// 广告展示成功
    MFAdSdkSupplierRepoTypeShowSuccess,
    /// 广告展示失败
    MFAdSdkSupplierRepoTypeShowFail,
    /// 广告点击
    MFAdSdkSupplierRepoTypeClick,
};

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Object interfaces

@interface MFAdSupplierModel : NSObject
@property (nonatomic, strong) NSMutableArray<MFAdSetting *> *rules;
@property (nonatomic, strong) NSMutableArray<MFAdSupplier *> *suppliers;
@property (nonatomic, copy)   NSString *sortTag;

@end

@interface MFAdSetting : NSObject
@property (nonatomic, strong) NSMutableArray<NSNumber *> *sort;
@property (nonatomic, assign) NSInteger percent;
@property (nonatomic, copy)   NSString *tag;

@end

@interface MFAdSupplier : NSObject
@property (nonatomic, copy)   NSString *appId;
@property (nonatomic, copy)   NSString *adspotId;
@property (nonatomic, copy)   NSString *tag;
@property (nonatomic, strong)   NSNumber *index;

@end

NS_ASSUME_NONNULL_END
