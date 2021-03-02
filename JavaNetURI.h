//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"
#import "JavaLangComparable.h"

@class NSString;

@interface JavaNetURI : NSObject <JavaLangComparable, JavaIoSerializable>
{
    NSString *string_;
    NSString *scheme_;
    NSString *schemeSpecificPart_;
    NSString *authority_;
    NSString *userInfo_;
    NSString *host_;
    int port_;
    NSString *path_;
    NSString *query_;
    NSString *fragment_;
    _Bool opaque_;
    _Bool absolute_;
    _Bool serverAuthority_;
    int hash__;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (int)getEffectivePortWithNSString:(id)arg1 withInt:(int)arg2;
+ (id)createWithNSString:(id)arg1;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (id)toURL;
- (id)getHashString;
- (id)description;
- (id)toASCIIString;
- (id)decodeWithNSString:(id)arg1;
- (id)resolveWithNSString:(id)arg1;
- (void)setSchemeSpecificPart;
- (id)resolveWithJavaNetURI:(id)arg1;
- (id)relativizeWithJavaNetURI:(id)arg1;
- (id)parseServerAuthority;
- (id)normalize;
- (id)normalizeWithNSString:(id)arg1 withBoolean:(_Bool)arg2;
- (_Bool)isOpaque;
- (_Bool)isAbsolute;
- (unsigned long long)hash;
- (id)getRawFragment;
- (id)getFragment;
- (id)getRawQuery;
- (id)getQuery;
- (id)getRawPath;
- (id)getPath;
- (int)getEffectivePort;
- (int)getPort;
- (id)getHost;
- (id)getRawUserInfo;
- (id)getUserInfo;
- (id)getRawAuthority;
- (id)getAuthority;
- (id)getRawSchemeSpecificPart;
- (id)getSchemeSpecificPart;
- (id)getScheme;
- (_Bool)isEqual:(id)arg1;
- (_Bool)escapedEqualsWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)convertHexToLowerCaseWithNSString:(id)arg1;
- (id)duplicate;
- (int)compareToWithId:(id)arg1;
- (_Bool)isValidDomainNameWithNSString:(id)arg1;
- (_Bool)isValidHostWithBoolean:(_Bool)arg1 withNSString:(id)arg2;
- (void)validateUserInfoWithNSString:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3;
- (void)parseAuthorityWithBoolean:(_Bool)arg1;
- (id)validateSchemeWithNSString:(id)arg1 withInt:(int)arg2;
- (void)parseURIWithNSString:(id)arg1 withBoolean:(_Bool)arg2;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withInt:(int)arg4 withNSString:(id)arg5 withNSString:(id)arg6 withNSString:(id)arg7;
- (id)initJavaNetURIWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withInt:(int)arg4 withNSString:(id)arg5 withNSString:(id)arg6 withNSString:(id)arg7;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (id)initWithNSString:(id)arg1;
- (id)init;

@end

