//
//  MFDataJsonManager.h
//  MFAdsCore
//
//  Created by cc on 2022/10/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MFDataJsonManager : NSObject

+ (instancetype)shared;
- (NSDictionary *)loadAdDataWithType:(adsType)type;

@end

NS_ASSUME_NONNULL_END
