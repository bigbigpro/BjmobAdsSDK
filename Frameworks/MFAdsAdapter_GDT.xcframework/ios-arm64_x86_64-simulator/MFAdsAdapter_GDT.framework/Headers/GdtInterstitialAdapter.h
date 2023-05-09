//
//  GdtInterstitialAdapter.h
//

#import <MFAdsAdspot/MFAdInterstitialDelegate.h>
#import <MFAdsCore/MFAdBaseAdPosition.h>

NS_ASSUME_NONNULL_BEGIN

@interface GdtInterstitialAdapter : MFAdBaseAdPosition
@property (nonatomic, weak) id<MFAdInterstitialDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
