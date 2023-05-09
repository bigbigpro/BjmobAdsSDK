//
//  MFAdSupplierHelper.h
//  MFAdsAdspot
//
//  Created by cc on 2022/8/31.
//

#import <Foundation/Foundation.h>
#import <MFAdsAdspot/MFAdBaseDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface MFAdSupplierHelper : NSObject

/// 是否可以执行（加载/展示）广告
/// adsType 广告类型
/// tag 广告商标识
/// delegate 回调代理
+ (BOOL)isAdAvailableWithAdsType:(adsType)adsType
                             tag:(NSString *)tag
                    withDelegate:(id<MFAdBaseDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
