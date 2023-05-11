# BjmobAdsSDK-iOS 快速指引

## 目前版本: 0.0.23

## 1. 快速接入

下面介绍EasyAds的快速接入方法，开发中也可以参考[Example](https://github.com/JiangYelinGit/BjmobAdsSDK/tree/main/Example)下的示例工程，快速了解。

### 1.1 开发环境准备

- 开发工具：推荐使用Xcode 14及以上版本
- 部署目标：iOS 11.0及以上版本

### 1.2 引入SDK

```
  pod 'BjmobAdsSDK'
```

### 1.3 编辑info.plist

#### 1.3.1 添加 SKAdNetworkItems

```
<key>SKAdNetworkItems</key>
	<array>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>v9wttpbfk9.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>n38lu8286q.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>su67r6k2v3.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>22mmun2rn5.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>238da6jt44.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>r3y5dwb26t.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>cstr6suwn9.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>4fzdc2evr5.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>2fnua5tdw4.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>ydx93a7ass.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>5a6flpkh64.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>p78axxw29g.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>v72qych5uu.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>c6k4g5qg8m.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>s39g8k73mm.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>3qy4746246.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>3sh42y64q3.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>f38h382jlk.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>hs6bdukanm.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>prcb7njmu6.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>v4nxqhlyqp.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>wzmmz9fp6w.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>yclnxrl5pm.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>t38b2kh725.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>7ug5zh24hu.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>9rd848q2bz.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>n6fk4nfna4.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>kbd757ywx3.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>9t245vhmpl.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>4468km3ulz.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>2u9pt9hc89.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>8s468mfl3y.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>av6w8kgt66.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>klf5c3l5u5.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>ppxm28t8ap.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>424m5254lk.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>uw77j35x4d.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>578prtvx9j.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>4dzt52r2t5.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>e5fvkxwrpn.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>8c4e2ghe7u.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>zq492l623r.skadnetwork</string>
		</dict>
		<dict>
			<key>SKAdNetworkIdentifier</key>
			<string>3qcr597p9d.skadnetwork</string>
		</dict>
	</array>

```

#### 1.3.2 添加 GADApplicationIdentifier

```
  <key>GADApplicationIdentifier</key>
  <string>ca-app-pub-3940256099942544~1458002511</string>
```

#### 1.3.3 添加 NSAppTransportSecurity
```
	<key>NSAppTransportSecurity</key>
	<dict>
		<key>NSAllowsArbitraryLoads</key>
		<true/>
	</dict>
```
#### 1.3.4 添加 NSUserTrackingUsageDescription

```
  <key>NSUserTrackingUsageDescription</key>
  <string>请求idfa权限</string>
```

## 1.4 编辑 Appdelegate.m

```
  - (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
      [self settingMFAds];
      return YES;
  }

  - (void)settingMFAds {
      [MFAdSdkConfig shareInstance].level = MFAdLogLevel_Debug;
      MFConfigModel * model = [[MFConfigModel alloc]init];
      model.debugMode = NO;
      [[MFAdSdkConfig shareInstance] registerAppID:@"69lSe9cvORWnd62o" withConfig:model];
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
```

## 1.5 各广告位集成实现

* [开屏广告：BjmobAdSplash](https://github.com/JiangYelinGit/BjmobAdsSDK/wiki/splash_ad)

* [插屏广告：BjmobAdInterstitial](https://github.com/JiangYelinGit/BjmobAdsSDK/wiki/Interstitial_ad)

* [横幅广告：BjmobAdBanner](https://github.com/JiangYelinGit/BjmobAdsSDK/wiki/banner_ad)

* [原生模板、信息流广告：BjmobAdNativeExpress](https://github.com/bayescom/EasyAds-iOS/wiki/3.4-%E5%8E%9F%E7%94%9F%E6%A8%A1%E6%9D%BF%E3%80%81%E4%BF%A1%E6%81%AF%E6%B5%81%E5%B9%BF%E5%91%8A)

* [激励视频广告：BjmobAdRewardVideo](https://github.com/bayescom/EasyAds-iOS/wiki/3.5-%E6%BF%80%E5%8A%B1%E8%A7%86%E9%A2%91%E5%B9%BF%E5%91%8A)

* [全屏视频广告：BjmobAdFullScreenVideo](https://github.com/bayescom/EasyAds-iOS/wiki/3.6-%E5%85%A8%E5%B1%8F%E8%A7%86%E9%A2%91%E5%B9%BF%E5%91%8A)



