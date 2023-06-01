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
    [self settingMFAds];
    return YES;
}

- (void)settingMFAds {
    [MFAdSdkConfig shareInstance].level = MFAdLogLevel_Debug;
    MFConfigModel * model = [[MFConfigModel alloc]init];
    model.debugMode = NO;
    [[MFAdSdkConfig shareInstance] registerAppID:@"1375ce71c7894b24" withConfig:model];
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [self requestTracking];
    });
}

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
