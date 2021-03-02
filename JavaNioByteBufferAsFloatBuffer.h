//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNioFloatBuffer.h"

@class JavaNioByteBuffer;

@interface JavaNioByteBufferAsFloatBuffer : JavaNioFloatBuffer
{
    JavaNioByteBuffer *byteBuffer_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)asFloatBufferWithJavaNioByteBuffer:(id)arg1;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)slice;
- (id)putWithFloatArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)putWithInt:(int)arg1 withFloat:(float)arg2;
- (id)putWithFloat:(float)arg1;
- (_Bool)protectedHasArray;
- (int)protectedArrayOffset;
- (id)protectedArray;
- (id)order;
- (_Bool)isReadOnly;
- (_Bool)isDirect;
- (id)getWithFloatArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (float)getWithInt:(int)arg1;
- (float)get;
- (id)duplicate;
- (id)compact;
- (id)asReadOnlyBuffer;
- (id)initWithJavaNioByteBuffer:(id)arg1;

@end

