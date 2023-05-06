//
//  MFNetworkConstants.h
//  NetWorkDemo
//
//  Created by cc on 2022/4/22.
//

#import <Foundation/Foundation.h>

/// Error codes in Firebase Network error domain.
/// Note: these error codes should never change. It would make it harder to decode the errors if
/// we inadvertently altered any of these codes in a future SDK version.
typedef NS_ENUM(NSInteger, MFNetworkErrorCode) {
  /// Unknown error.
  MFNetworkErrorCodeUnknown = 0,
  /// Error occurs when the request URL is invalid.
  MFErrorCodeNetworkInvalidURL = 1,
  /// Error occurs when request cannot be constructed.
  MFErrorCodeNetworkRequestCreation = 2,
  /// Error occurs when payload cannot be compressed.
  MFErrorCodeNetworkPayloadCompression = 3,
  /// Error occurs when session task cannot be created.
  MFErrorCodeNetworkSessionTaskCreation = 4,
  /// Error occurs when there is no response.
  MFErrorCodeNetworkInvalidResponse = 5
};

#pragma mark - Network constants

/// The prefix of the ID of the background session.
extern NSString *const kMFNetworkBackgroundSessionConfigIDPrefix;

/// The sub directory to store the files of data that is being uploaded in the background.
extern NSString *const kMFNetworkApplicationSupportSubdirectory;

/// Name of the temporary directory that stores files for background uploading.
extern NSString *const kMFNetworkTempDirectoryName;

/// The period when the temporary uploading file can stay.
extern const NSTimeInterval kMFNetworkTempFolderExpireTime;

/// The default network request timeout interval.
extern const NSTimeInterval kMFNetworkTimeOutInterval;

/// The host to check the reachability of the network.
extern NSString *const kMFNetworkReachabilityHost;

/// The key to get the error context of the UserInfo.
extern NSString *const kMFNetworkErrorContext;

#pragma mark - Network Status Code

extern const int kMFNetworkHTTPStatusOK;
extern const int kMFNetworkHTTPStatusNoContent;
extern const int kMFNetworkHTTPStatusCodeMultipleChoices;
extern const int kMFNetworkHTTPStatusCodeMovedPermanently;
extern const int kMFNetworkHTTPStatusCodeFound;
extern const int kMFNetworkHTTPStatusCodeNotModified;
extern const int kMFNetworkHTTPStatusCodeMovedTemporarily;
extern const int kMFNetworkHTTPStatusCodeNotFound;
extern const int kMFNetworkHTTPStatusCodeCannotAcceptTraffic;
extern const int kMFNetworkHTTPStatusCodeUnavailable;
