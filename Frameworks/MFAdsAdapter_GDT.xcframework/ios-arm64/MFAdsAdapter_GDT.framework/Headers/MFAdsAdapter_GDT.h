//
//  MFAdsAdapter_GDT.h
//  MFAdsAdapter_GDT
//
//  Created by cc on 2022/5/24.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#pragma mark - GDT
#import "GdtBannerAdapter.h"
#import "GdtInterstitialAdapter.h"
#import "GdtRewardVideoAdapter.h"
#import "GdtSplashAdapter.h"

#pragma mark - MFAdsCore
#if __has_include(<MFAdsCore/MFAdsCore.h>)
#import <MFAdsCore/MFAdsCore.h>
#import <MFAdsAdspot/MFAdsAdspot.h>
#else
#import "MFAdsCore/MFAdsCore.h"
#import "MFAdsAdspot/MFAdsAdspot.h"
#endif

//! Project version number for MFAdsAdapter_GDT.
FOUNDATION_EXPORT double MFAdsAdapter_GDTVersionNumber;

//! Project version string for MFAdsAdapter_GDT.
FOUNDATION_EXPORT const unsigned char MFAdsAdapter_GDTVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <MFAdsAdapter_GDT/PublicHeader.h>


