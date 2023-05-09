//
//  MFAdSplashProtocol.h
//

#ifndef MFAdSplashProtocol_h
#define MFAdSplashProtocol_h

#import <MFAdsAdspot/MFAdBaseDelegate.h>

@protocol MFAdSplashDelegate <MFAdBaseDelegate>

@optional
/// 广告点击跳过
- (void)ad_splashOnAdSkipClicked;
/// 广告倒计时结束回调
- (void)ad_splashOnAdCountdownToZero;

@end

#endif 
