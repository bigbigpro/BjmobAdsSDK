//
//  CsjRewardVideoAdapter.h
//

#import <MFAdsAdspot/MFAdRewardVideoDelegate.h>
#import <MFAdsCore/MFAdBaseAdPosition.h>

NS_ASSUME_NONNULL_BEGIN

@interface CsjRewardVideoAdapter : MFAdBaseAdPosition
@property (nonatomic, weak) id<MFAdRewardVideoDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
