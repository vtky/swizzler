/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class UIButton;

@interface GUAttachmentButton : _ABAddressBookAddRecord
{
    unsigned int _attachmentCount;
    UIButton *_attachmentBadgeButton;
}

- (unsigned int)attachmentCount;
- (void)dealloc;
- (void)setAttachmentCount:(unsigned int)fp8;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)fp8 target:(id)fp24 action:(SEL)fp28 attachmentCount:(int)fp32;
- (id)initWithFrame:(struct CGRect)fp8 attachmentCount:(int)fp24;
- (id)initWithFrame:(struct CGRect)fp8;

@end
