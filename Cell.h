//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton, UILabel;

@interface Cell : UICollectionViewCell
{
    UILabel *_number;
    UILabel *_nowDefult;
    UIButton *_btnCheckBox;
}

@property(retain, nonatomic) UIButton *btnCheckBox; // @synthesize btnCheckBox=_btnCheckBox;
@property(retain, nonatomic) UILabel *nowDefult; // @synthesize nowDefult=_nowDefult;
@property(retain, nonatomic) UILabel *number; // @synthesize number=_number;
- (id)initWithFrame:(struct CGRect)arg1;

@end

