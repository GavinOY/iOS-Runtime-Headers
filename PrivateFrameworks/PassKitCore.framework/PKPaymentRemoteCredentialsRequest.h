/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRemoteCredentialsRequest : PKPaymentWebServiceRequest {
    int  _credentialType;
    BOOL  _includeMetadata;
}

@property (nonatomic) int credentialType;
@property (nonatomic) BOOL includeMetadata;

- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3;
- (int)credentialType;
- (BOOL)includeMetadata;
- (void)setCredentialType:(int)arg1;
- (void)setIncludeMetadata:(BOOL)arg1;

@end
