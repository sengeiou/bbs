//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNioChannelsPipe_SinkChannel.h"

#import "JavaNioFileDescriptorChannel.h"

@class JavaIoFileDescriptor, JavaNioChannelsSocketChannel;

@interface JavaNioPipeImpl_PipeSinkChannel : JavaNioChannelsPipe_SinkChannel <JavaNioFileDescriptorChannel>
{
    JavaIoFileDescriptor *fd_;
    JavaNioChannelsSocketChannel *channel_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)getFD;
- (long long)writeWithJavaNioByteBufferArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (long long)writeWithJavaNioByteBufferArray:(id)arg1;
- (int)writeWithJavaNioByteBuffer:(id)arg1;
- (void)implConfigureBlockingWithBoolean:(_Bool)arg1;
- (void)implCloseSelectableChannel;
- (id)initWithJavaNioPipeImpl:(id)arg1 withJavaNioChannelsSpiSelectorProvider:(id)arg2 withJavaIoFileDescriptor:(id)arg3;

@end

