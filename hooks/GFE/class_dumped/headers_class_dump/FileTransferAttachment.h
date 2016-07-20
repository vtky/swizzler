//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class NSData, NSString;

@interface FileTransferAttachment : NSObject
{
    NSString *fileName;
    int fileSize;
    NSData *data;
    int sentSize;
}

+ (id)fileTransferAttachmentWithURL:(id)arg1 withOriginalFileName:(id)arg2;
@property int sentSize; // @synthesize sentSize;
@property(retain, nonatomic) NSData *data; // @synthesize data;
@property int fileSize; // @synthesize fileSize;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName;
- (void)dealloc;

@end
