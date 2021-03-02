//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BigDataPageTagUtils : NSObject
{
    NSString *_pagepath;
    NSString *_querystring;
    NSString *_pagename;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_pevl;
    NSString *_link;
    NSString *_pageurlfull;
    NSString *_host;
    NSString *_pe;
    NSString *_taggingServerUrlStr;
    NSString *_requestUrlStr;
}

@property(retain, nonatomic) NSString *requestUrlStr; // @synthesize requestUrlStr=_requestUrlStr;
@property(retain, nonatomic) NSString *taggingServerUrlStr; // @synthesize taggingServerUrlStr=_taggingServerUrlStr;
@property(retain, nonatomic) NSString *pe; // @synthesize pe=_pe;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *pageurlfull; // @synthesize pageurlfull=_pageurlfull;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *pevl; // @synthesize pevl=_pevl;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *pagename; // @synthesize pagename=_pagename;
@property(retain, nonatomic) NSString *querystring; // @synthesize querystring=_querystring;
@property(retain, nonatomic) NSString *pagepath; // @synthesize pagepath=_pagepath;
- (void)settingCookies;
- (void)composeRequestUrl;
- (void)startTaggingServerConnection;
- (void)initObjects;
- (void)dealloc;
- (id)init;

@end
