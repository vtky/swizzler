/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

@protocol GTServiceClientDelegate
- (void)GTServiceClientDidReceiveFrom:(id)fp8 withParams:(id)fp12 withAttachments:(id)fp16 correspondingToRequestID:(id)fp20;
- (void)GTServiceClientWillConnectTo:(id)fp8 withClientCertificate:(id *)fp12 withClientCertificatePrivateKey:(id *)fp16 withPkcs12Password:(id *)fp20 withServerCertificate:(id *)fp24 withEnterpriseUserNumber:(int *)fp28;
@end
