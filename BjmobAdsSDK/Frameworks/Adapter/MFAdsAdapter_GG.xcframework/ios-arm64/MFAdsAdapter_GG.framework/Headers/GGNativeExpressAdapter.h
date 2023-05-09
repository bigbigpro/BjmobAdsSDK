//
//  GGNativeExpressAdapter.h
//

#import <MFAdsCore/MFAdBaseAdPosition.h>
#import <MFAdsAdspot/MFAdNativeExpressDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface GGNativeExpressAdapter : MFAdBaseAdPosition

@property (nonatomic, weak) id<MFAdNativeExpressDelegate> delegate;
@end

NS_ASSUME_NONNULL_END
