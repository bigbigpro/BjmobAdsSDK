//
//  GGSplashAdapter.h
//

#if __has_include(<MFAdsAdspot/MFAdSplashDelegate.h>)
#import <MFAdsAdspot/MFAdSplashDelegate.h>
#import <MFAdsCore/MFAdBaseAdPosition.h>
#else
#import "MFAdSplashDelegate.h"
#import "MFAdBaseAdPosition.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface GGSplashAdapter : MFAdBaseAdPosition

@property (nonatomic, weak) id<MFAdSplashDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
