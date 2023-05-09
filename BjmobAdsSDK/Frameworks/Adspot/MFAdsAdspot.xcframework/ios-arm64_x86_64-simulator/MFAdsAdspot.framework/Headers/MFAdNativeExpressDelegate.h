//
//  MFAdNativeExpressProtocol.h
//

#ifndef MFAdNativeExpressProtocol_h
#define MFAdNativeExpressProtocol_h

#import <MFAdsAdspot/MFAdCommonDelegate.h>

@class MFAdNativeExpressView;

@protocol MFAdNativeExpressDelegate <MFAdBaseDelegate>

@optional

/// 广告数据拉取成功
- (void)ad_NativeExpressOnAdLoadSuccess:(nullable NSArray<MFAdNativeExpressView *> *)views;
/// 广告数据拉取失败
- (void)ad_NativeExpressOnAdLoadFailWithError:(NSError *_Nullable)error;
/// 广告渲染成功
- (void)ad_NativeExpressOnAdRenderSuccess:(nullable MFAdNativeExpressView *)adView;
/// 广告渲染失败
- (void)ad_NativeExpressOnAdRenderFail:(nullable MFAdNativeExpressView *)adView withError:(NSError *_Nullable)error;
/// 广告视图为空
- (void)ad_NativeExpressOnAdGetViewIsEmpty;
/// 广告曝光
- (void)ad_NativeExpressOnAdShow:(nullable MFAdNativeExpressView *)adView;
/// 广告点击
- (void)ad_NativeExpressOnAdClicked:(nullable MFAdNativeExpressView *)adView;
/// 广告被关闭 (注: 百度广告(百青藤), 不支持该回调, 若使用百青藤,则该回到功能请自行实现)
- (void)ad_NativeExpressOnAdClosed:(nullable MFAdNativeExpressView *)adView;

@end

#endif
