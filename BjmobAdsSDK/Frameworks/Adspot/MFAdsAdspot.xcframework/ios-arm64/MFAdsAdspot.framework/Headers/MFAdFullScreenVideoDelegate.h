//
//  MFAdFullScreenVideoDelegate.h
//

#ifndef MFAdFullScreenVideoDelegate_h
#define MFAdFullScreenVideoDelegate_h

#import <MFAdsAdspot/MFAdBaseDelegate.h>

@protocol MFAdFullScreenVideoDelegate <MFAdBaseDelegate>
@optional
/// 视频播放完成
- (void)ad_FullScreenVideoOnAdPlayFinish;

@end

#endif
