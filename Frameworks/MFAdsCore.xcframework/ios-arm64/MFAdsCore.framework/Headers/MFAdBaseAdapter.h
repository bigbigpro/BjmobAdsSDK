//
//  MFAdBaseAdapter.h
//  

#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import <objc/message.h>

#import <MFAdsCore/MFAdSupplierModel.h>
#import <MFAdsCore/MFAdError.h>
#import <MFAdsCore/MFAdSdkConfig.h>
#import <MFAdsCore/MFAdLog.h>
#import <MFAdsCore/UIApplication+MFAds.h>
#import <MFAdsCore/MFDatabaseManager.h>
#import <MFAdsCore/MFAdsService.h>

NS_ASSUME_NONNULL_BEGIN

@interface MFAdBaseAdapter : NSObject

/// 各渠道错误的详细原因
@property (nonatomic, strong) NSMutableDictionary * errorDescriptions;
/// 控制器(在一次广告周期中 不可更改, 不然会引起未知错误)
@property(nonatomic, weak) UIViewController *viewController;
/// 初始化方法
/// @param jsonDic  策略广告的策略信息 json格式请参考 DataJson目录下的.json文件
- (instancetype)initWithJsonDic:(NSDictionary *_Nonnull)jsonDic adsType:(adsType)adsType;
/// 加载广告
- (void)loadAd;
/// 展示广告
- (void)showAd;
/// 加载并展现
- (void)loadAndShowAd;
/// 加载下个渠道
- (void)loadNextSupplierIfHas;
/// 上报数据
/// @param repoType 操作类型
/// @param supplier 模型
/// @param error 错误
- (void)reportWithType:(MFAdSdkSupplierRepoType)repoType supplier:(MFAdSupplier *)supplier error:(nullable NSError *)error;
/// 取消当前策略请求
- (void)deallocAdapter;
/// 类型转化
- (NSString *)typeToStrWithType:(MFAdSdkSupplierRepoType)type;

@end

NS_ASSUME_NONNULL_END
