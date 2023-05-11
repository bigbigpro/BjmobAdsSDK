//
//  AppDelegate.m
//  Example
//
//  Created by ext.jiangyelin1 on 2023/5/10.
//

#import "AppDelegate.h"
#import <MFAdsCore/MFAdSdkConfig.h>
#import <AppTrackingTransparency/AppTrackingTransparency.h>
#import <AdSupport/AdSupport.h>

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    [self settingMFAds];
    
    
    return YES;
}

/// 配置sdk
- (void)settingMFAds {
    [MFAdSdkConfig shareInstance].level = MFAdLogLevel_Debug;
    MFConfigModel * model = [[MFConfigModel alloc]init];
//#ifdef DEBUG
//    model.debugMode = YES;
//#else
    model.debugMode = NO;
//#endif
    [[MFAdSdkConfig shareInstance]registerAppID:@"69lSe9cvORWnd62o" withConfig:model];
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [self requestTracking];
    });
}

// 获取IDFA权限
- (void)requestTracking {
    if (@available(iOS 14, *)) {
        [ATTrackingManager requestTrackingAuthorizationWithCompletionHandler:^(ATTrackingManagerAuthorizationStatus status) {
            if (status == ATTrackingManagerAuthorizationStatusAuthorized) {

            NSString *idfa = [[ASIdentifierManager sharedManager].advertisingIdentifier UUIDString];
                NSLog(@"idfa = %@",idfa);
            }
        }];
    }
}


@end
