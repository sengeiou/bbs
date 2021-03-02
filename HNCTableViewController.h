//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HNCViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, UITableView;

@interface HNCTableViewController : HNCViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    UITableView *_commonTableView;
}

@property(retain, nonatomic) UITableView *commonTableView; // @synthesize commonTableView=_commonTableView;
- (void)showWillOpenBrowserAlert:(id)arg1;
- (void)tableFootViewButtonClickEvent:(id)arg1;
- (void)generateTableFootViewWithFirstButtonTitle:(id)arg1 secondButtonTitle:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)generateCellView3_7AtIndexPath:(id)arg1 titleLabelText:(id)arg2 valueTextFieldPlaceholder:(id)arg3;
- (id)generateCellView4_6AtIndexPath:(id)arg1 titleLabelText:(id)arg2 valueLabelText:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

