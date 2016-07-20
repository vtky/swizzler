//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "GUSplitViewController.h"

@class DocumentsTVC, GUBarButtonItem, UIActionSheet, UIToolbar;

@interface DocumentsSplitViewController : GUSplitViewController
{
    DocumentsTVC *_documentsTVC;
    UIActionSheet *currentActionSheet;
    UIToolbar *toolBarTrashAction;
    UIToolbar *toolBarAction;
    GUBarButtonItem *expandViewButton;
    GUBarButtonItem *collapseViewButton;
    BOOL _expanded;
    UIToolbar *toolBar;
    GUBarButtonItem *shareButton;
}

@property(retain, nonatomic) UIToolbar *toolBarTrashAction; // @synthesize toolBarTrashAction;
@property(retain, nonatomic) UIToolbar *toolBarAction; // @synthesize toolBarAction;
@property(nonatomic) UIToolbar *toolBar; // @synthesize toolBar;
@property(nonatomic) UIActionSheet *currentActionSheet; // @synthesize currentActionSheet;
- (void)fixFrameForExpandedMode;
@property(readonly, nonatomic) GUBarButtonItem *shareButton; // @synthesize shareButton;
- (void)hideTrashButtonOnToolBar;
- (void)showTrashButtonOnToolBar;
- (void)deleteDetailNavVCViewControllers;
- (void)showDetailViewController:(id)arg1 showToolBar:(BOOL)arg2;
- (void)showDetailViewController:(id)arg1;
- (void)actionShareSelectedItem;
- (void)actionDeleteSelectedItem:(id)arg1;
- (void)actionCollapseView;
- (void)actionExpandView;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (void)closePopover;

@end
