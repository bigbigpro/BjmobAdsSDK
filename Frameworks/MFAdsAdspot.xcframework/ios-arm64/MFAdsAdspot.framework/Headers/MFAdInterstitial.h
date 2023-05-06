//
//  MFAdInterstitial.h
//

#import <MFAdsCore/MFAdBaseAdapter.h>
#import <MFAdsAdspot/MFAdInterstitialDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface MFAdInterstitial : MFAdBaseAdapter

/// 广告方法回调代理
@property (nonatomic, weak) id<MFAdInterstitialDelegate> delegate;

#pragma mark - 构造方法
- (instancetype)initWithViewController:(UIViewController *)viewController;
#ifdef DEBUG
/// 仅限于debug模式下使用
- (instancetype)initWithJsonDic:(NSDictionary *)jsonDic
                 viewController:(UIViewController *)viewController;
#endif
@end

NS_ASSUME_NONNULL_END
