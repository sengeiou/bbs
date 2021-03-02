//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JavaNioCharsetCharset, NSString;

@interface JavaNioCharsetCharsetDecoder : NSObject
{
    float averageCharsPerByte__;
    float maxCharsPerByte__;
    JavaNioCharsetCharset *cs_;
    NSString *replacementChars_;
    int status_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)reset;
- (id)replaceWithWithNSString:(id)arg1;
- (id)replacement;
- (id)onUnmappableCharacterWithJavaNioCharsetCodingErrorAction:(id)arg1;
- (id)onMalformedInputWithJavaNioCharsetCodingErrorAction:(id)arg1;
- (float)maxCharsPerByte;
- (_Bool)isCharsetDetected;
- (_Bool)isAutoDetecting;
- (id)flushWithJavaNioCharBuffer:(id)arg1;
- (id)detectedCharset;
- (id)decodeLoopWithJavaNioByteBuffer:(id)arg1 withJavaNioCharBuffer:(id)arg2;
- (id)decodeWithJavaNioByteBuffer:(id)arg1 withJavaNioCharBuffer:(id)arg2 withBoolean:(_Bool)arg3;
- (id)decodeWithJavaNioByteBuffer:(id)arg1;
- (id)charset;
- (float)averageCharsPerByte;
- (id)initWithJavaNioCharsetCharset:(id)arg1 withFloat:(float)arg2 withFloat:(float)arg3;

@end

