//
//  CsjSplashAdapter.h
//

#import <MFAdsAdspot/MFAdSplashDelegate.h>
#import <MFAdsCore/MFAdBaseAdPosition.h>

NS_ASSUME_NONNULL_BEGIN

@interface CsjSplashAdapter : MFAdBaseAdPosition
@property (nonatomic, weak) id<MFAdSplashDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
