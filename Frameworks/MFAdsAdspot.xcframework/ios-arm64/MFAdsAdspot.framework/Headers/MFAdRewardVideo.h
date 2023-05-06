//
//  MFAdRewardVideo.h
//  

#if __has_include(<MFAdsCore/MFAdBaseAdapter.h>)
#import <MFAdsCore/MFAdBaseAdapter.h>
#import <MFAdsAdspot/MFAdRewardVideoDelegate.h>
#else
#import "MFAdBaseAdapter.h"
#import "MFAdRewardVideoDelegate.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface MFAdRewardVideo : MFAdBaseAdapter
/// 广告方法回调代理
@property (nonatomic, weak) id<MFAdRewardVideoDelegate> delegate;

- (instancetype)initWithViewController:(nonnull UIViewController *)viewController;
#ifdef DEBUG
/// 仅限于debug模式下使用
- (instancetype)initWithJsonDic:(NSDictionary *)jsonDic
                 viewController:(nonnull UIViewController *)viewController;
#endif
@end

NS_ASSUME_NONNULL_END
