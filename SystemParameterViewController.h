//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MajorViewController.h"

@class EWalletUtils, NSString, UILabel;

@interface SystemParameterViewController : MajorViewController
{
    UILabel *_syslabel;
    EWalletUtils *_ewallet;
    NSString *_sysStr;
}

@property(retain, nonatomic) NSString *sysStr; // @synthesize sysStr=_sysStr;
@property(retain, nonatomic) EWalletUtils *ewallet; // @synthesize ewallet=_ewallet;
@property(retain, nonatomic) UILabel *syslabel; // @synthesize syslabel=_syslabel;
- (void)btnHomeClicked:(id)arg1;
- (void)systemView;
- (void)viewDidLoad;

@end
