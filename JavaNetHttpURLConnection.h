//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNetURLConnection.h"

@class NSString;

@interface JavaNetHttpURLConnection : JavaNetURLConnection
{
    NSString *method_;
    int responseCode_;
    NSString *responseMessage_;
    _Bool instanceFollowRedirects_;
    int chunkLength_;
    int fixedContentLength_;
    long long fixedContentLengthLong_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_HTTP_SERVER_ERROR_;
+ (void)initialize;
+ (void)setFollowRedirectsWithBoolean:(_Bool)arg1;
+ (_Bool)getFollowRedirects;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (void)setChunkedStreamingModeWithInt:(int)arg1;
- (void)setFixedLengthStreamingModeWithInt:(int)arg1;
- (void)setFixedLengthStreamingModeWithLong:(long long)arg1;
- (long long)getHeaderFieldDateWithNSString:(id)arg1 withLong:(long long)arg2;
- (void)setInstanceFollowRedirectsWithBoolean:(_Bool)arg1;
- (_Bool)getInstanceFollowRedirects;
- (id)getContentEncoding;
- (_Bool)usingProxy;
- (void)setRequestMethodWithNSString:(id)arg1;
- (id)getResponseMessage;
- (int)getResponseCode;
- (id)getRequestMethod;
- (id)getPermission;
- (id)getErrorStream;
- (void)disconnect;
- (id)initWithJavaNetURL:(id)arg1;

@end

