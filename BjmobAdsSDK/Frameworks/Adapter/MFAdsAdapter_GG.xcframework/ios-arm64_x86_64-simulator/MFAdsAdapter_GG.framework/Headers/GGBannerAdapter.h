//
//  GGBannerAdapter.h
//

#if __has_include(<MFAdsAdspot/MFAdBannerDelegate.h>)
#import <MFAdsAdspot/MFAdBannerDelegate.h>
#import <MFAdsCore/MFAdBaseAdPosition.h>
#else
#import "MFAdBannerDelegate.h"
#import "MFAdBaseAdPosition.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface GGBannerAdapter : MFAdBaseAdPosition

@property (nonatomic, weak) id<MFAdBannerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
