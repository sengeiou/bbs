//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaIoInputStream.h"

@class DalvikSystemCloseGuard, JavaIoFileDescriptor, JavaNioChannelsFileChannel;

@interface JavaIoFileInputStream : JavaIoInputStream
{
    JavaIoFileDescriptor *fd_;
    _Bool shouldClose_;
    JavaNioChannelsFileChannel *channel_;
    DalvikSystemCloseGuard *guard_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (long long)skipWithLong:(long long)arg1;
- (int)readWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)read;
- (id)getFD;
- (id)getChannel;
- (void)dealloc;
- (void)close;
- (int)available;
- (id)initWithNSString:(id)arg1;
- (id)initWithJavaIoFileDescriptor:(id)arg1;
- (id)initWithJavaIoFile:(id)arg1;
- (id)initJavaIoFileInputStreamWithJavaIoFile:(id)arg1;

@end

