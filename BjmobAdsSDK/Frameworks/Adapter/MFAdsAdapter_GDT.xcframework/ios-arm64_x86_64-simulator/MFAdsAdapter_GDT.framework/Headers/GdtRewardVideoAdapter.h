//
//  GdtRewardVideoAdapter.h
//

#if __has_include(<MFAdsAdspot/MFAdRewardVideoDelegate.h>)
#import <MFAdsAdspot/MFAdRewardVideoDelegate.h>
#import <MFAdsCore/MFAdBaseAdPosition.h>
#else
#import "MFAdRewardVideoDelegate.h"
#import "MFAdBaseAdPosition.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface GdtRewardVideoAdapter : MFAdBaseAdPosition
@property (nonatomic, weak) id<MFAdRewardVideoDelegate> delegate;
@end

NS_ASSUME_NONNULL_END
