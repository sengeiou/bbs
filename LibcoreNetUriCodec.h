//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LibcoreNetUriCodec : NSObject
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)appendHexWithJavaLangStringBuilder:(id)arg1 withByte:(BOOL)arg2;
+ (void)appendHexWithJavaLangStringBuilder:(id)arg1 withNSString:(id)arg2 withJavaNioCharsetCharset:(id)arg3;
+ (id)decodeWithNSString:(id)arg1;
+ (int)hexToIntWithChar:(unsigned short)arg1;
+ (id)decodeWithNSString:(id)arg1 withBoolean:(_Bool)arg2 withJavaNioCharsetCharset:(id)arg3 withBoolean:(_Bool)arg4;
+ (void)validateSimpleWithNSString:(id)arg1 withNSString:(id)arg2;
+ (id)memDebugStaticReferences;
- (id)init;
- (void)appendPartiallyEncodedWithJavaLangStringBuilder:(id)arg1 withNSString:(id)arg2;
- (void)appendEncodedWithJavaLangStringBuilder:(id)arg1 withNSString:(id)arg2;
- (id)encodeWithNSString:(id)arg1 withJavaNioCharsetCharset:(id)arg2;
- (void)appendEncodedWithJavaLangStringBuilder:(id)arg1 withNSString:(id)arg2 withJavaNioCharsetCharset:(id)arg3 withBoolean:(_Bool)arg4;
- (id)validateWithNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withNSString:(id)arg4;
- (_Bool)isRetainedWithChar:(unsigned short)arg1;

@end

