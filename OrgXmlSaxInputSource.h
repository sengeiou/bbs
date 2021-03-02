//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JavaIoInputStream, JavaIoReader, NSString;

@interface OrgXmlSaxInputSource : NSObject
{
    NSString *publicId_;
    NSString *systemId_;
    JavaIoInputStream *byteStream_;
    NSString *encoding_;
    JavaIoReader *characterStream_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)getCharacterStream;
- (void)setCharacterStreamWithJavaIoReader:(id)arg1;
- (id)getEncoding;
- (void)setEncodingWithNSString:(id)arg1;
- (id)getByteStream;
- (void)setByteStreamWithJavaIoInputStream:(id)arg1;
- (id)getSystemId;
- (void)setSystemIdWithNSString:(id)arg1;
- (id)getPublicId;
- (void)setPublicIdWithNSString:(id)arg1;
- (id)initWithJavaIoReader:(id)arg1;
- (id)initWithJavaIoInputStream:(id)arg1;
- (id)initWithNSString:(id)arg1;
- (id)init;

@end

