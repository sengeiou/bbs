//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNioChannelsSpiAbstractSelectableChannel.h"

#import "JavaNioChannelsNetworkChannel.h"

@interface JavaNioChannelsServerSocketChannel : JavaNioChannelsSpiAbstractSelectableChannel <JavaNioChannelsNetworkChannel>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)open;
+ (id)memDebugStaticReferences;
- (id)accept;
- (id)supportedOptions;
- (id)setOptionWithJavaNetSocketOption:(id)arg1 withId:(id)arg2;
- (id)getOptionWithJavaNetSocketOption:(id)arg1;
- (id)getLocalAddress;
- (id)bindWithJavaNetSocketAddress:(id)arg1 withInt:(int)arg2;
- (id)bindWithJavaNetSocketAddress:(id)arg1;
- (id)socket;
- (int)validOps;
- (id)initWithJavaNioChannelsSpiSelectorProvider:(id)arg1;

@end

