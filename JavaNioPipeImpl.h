//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNioChannelsPipe.h"

@class JavaNioPipeImpl_PipeSinkChannel, JavaNioPipeImpl_PipeSourceChannel;

@interface JavaNioPipeImpl : JavaNioChannelsPipe
{
    JavaNioPipeImpl_PipeSinkChannel *sink__;
    JavaNioPipeImpl_PipeSourceChannel *source__;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)source;
- (id)sink;
- (id)initWithJavaNioChannelsSpiSelectorProvider:(id)arg1;

@end

