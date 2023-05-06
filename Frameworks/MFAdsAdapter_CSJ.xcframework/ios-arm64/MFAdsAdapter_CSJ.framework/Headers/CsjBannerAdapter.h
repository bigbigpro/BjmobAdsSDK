//
//  CsjBannerAdapter.h
//

#import <MFAdsAdspot/MFAdBannerDelegate.h>
#import <MFAdsCore/MFAdBaseAdPosition.h>

NS_ASSUME_NONNULL_BEGIN

@interface CsjBannerAdapter : MFAdBaseAdPosition

@property (nonatomic, weak) id<MFAdBannerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
