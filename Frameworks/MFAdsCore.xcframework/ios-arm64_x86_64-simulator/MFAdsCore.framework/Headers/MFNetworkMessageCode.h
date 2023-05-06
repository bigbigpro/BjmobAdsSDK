//
//  MFNetworkMessageCode.h
//  NetWorkDemo
//
//  Created by cc on 2022/4/22.
//

#import <Foundation/Foundation.h>

// Make sure these codes do not overlap with any contained in the FIRAMessageCode enum.
typedef NS_ENUM(NSInteger, MFNetworkMessageCode) {
  // GULNetwork.m
  kMFNetworkMessageCodeNetwork000 = 900000,  // I-NET900000
  kMFNetworkMessageCodeNetwork001 = 900001,  // I-NET900001
  kMFNetworkMessageCodeNetwork002 = 900002,  // I-NET900002
  kMFNetworkMessageCodeNetwork003 = 900003,  // I-NET900003
  // GULNetworkURLSession.m
  kMFNetworkMessageCodeURLSession000 = 901000,  // I-NET901000
  kMFNetworkMessageCodeURLSession001 = 901001,  // I-NET901001
  kMFNetworkMessageCodeURLSession002 = 901002,  // I-NET901002
  kMFNetworkMessageCodeURLSession003 = 901003,  // I-NET901003
  kMFNetworkMessageCodeURLSession004 = 901004,  // I-NET901004
  kMFNetworkMessageCodeURLSession005 = 901005,  // I-NET901005
  kMFNetworkMessageCodeURLSession006 = 901006,  // I-NET901006
  kMFNetworkMessageCodeURLSession007 = 901007,  // I-NET901007
  kMFNetworkMessageCodeURLSession008 = 901008,  // I-NET901008
  kMFNetworkMessageCodeURLSession009 = 901009,  // I-NET901009
  kMFNetworkMessageCodeURLSession010 = 901010,  // I-NET901010
  kMFNetworkMessageCodeURLSession011 = 901011,  // I-NET901011
  kMFNetworkMessageCodeURLSession012 = 901012,  // I-NET901012
  kMFNetworkMessageCodeURLSession013 = 901013,  // I-NET901013
  kMFNetworkMessageCodeURLSession014 = 901014,  // I-NET901014
  kMFNetworkMessageCodeURLSession015 = 901015,  // I-NET901015
  kMFNetworkMessageCodeURLSession016 = 901016,  // I-NET901016
  kMFNetworkMessageCodeURLSession017 = 901017,  // I-NET901017
  kMFNetworkMessageCodeURLSession018 = 901018,  // I-NET901018
  kMFNetworkMessageCodeURLSession019 = 901019,  // I-NET901019
};
