//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActionSheet.h"

#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSObject<MMBActionSheetDelegate><NSObject>, NSString;

@interface MMBActionSheet : UIActionSheet <UIActionSheetDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSObject<MMBActionSheetDelegate><NSObject> *actionSheetDelegate;
    NSArray *aryButtonTitle;
    NSString *sTitle;
    NSString *sCancelTitle;
}

@property(retain, nonatomic) NSString *sCancelTitle; // @synthesize sCancelTitle;
@property(retain, nonatomic) NSString *sTitle; // @synthesize sTitle;
@property(retain, nonatomic) NSArray *aryButtonTitle; // @synthesize aryButtonTitle;
@property(nonatomic) NSObject<MMBActionSheetDelegate><NSObject> *actionSheetDelegate; // @synthesize actionSheetDelegate;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)willPresentActionSheet:(id)arg1;
- (id)buttonTitleAtIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

