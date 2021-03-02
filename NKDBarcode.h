//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface NKDBarcode : NSObject <NSCopying, NSCoding>
{
    NSString *content;
    float height;
    float width;
    BOOL checkDigit;
    float barWidth;
    _Bool printsCaption;
    float fontSize;
    float captionHeight;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (float)lastBar;
- (float)firstBar;
- (float)barTop:(int)arg1;
- (float)barBottom:(int)arg1;
- (id)caption;
- (id)rightCaption;
- (id)leftCaption;
- (int)digitsToRight;
- (int)digitsToLeft;
- (float)fontSize;
- (void)setFontSize:(float)arg1;
- (float)captionHeight;
- (void)setCaptionHeight:(float)arg1;
- (id)completeBarcode;
- (id)barcode;
- (id)_encodeChar:(BOOL)arg1;
- (id)terminator;
- (id)initiator;
- (_Bool)isContentValid;
- (void)generateChecksum;
- (_Bool)isSizeValid;
- (float)barWidth;
- (_Bool)printsCaption;
- (BOOL)checkDigit;
- (float)width;
- (float)height;
- (id)content;
- (void)setBarWidth:(float)arg1;
- (void)setPrintsCaption:(_Bool)arg1;
- (void)setCheckDigit:(BOOL)arg1;
- (void)calculateWidth;
- (void)setWidth:(float)arg1;
- (void)setHeight:(float)arg1;
- (void)setContent:(id)arg1;
- (id)initWithContent:(id)arg1 printsCaption:(_Bool)arg2 andBarWidth:(float)arg3 andHeight:(float)arg4 andFontSize:(float)arg5 andCheckDigit:(BOOL)arg6;
- (id)initWithContent:(id)arg1 printsCaption:(_Bool)arg2;
- (id)initWithContent:(id)arg1;

@end

