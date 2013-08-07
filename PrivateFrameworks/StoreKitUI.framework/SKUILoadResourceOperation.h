/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SKUIResourceRequest, SKUIClientContext, NSLock;

@interface SKUILoadResourceOperation : NSOperation  {
    SKUIClientContext *_clientContext;
    NSLock *_lock;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _outputBlock;

    SKUIResourceRequest *_request;
}

@property(readonly) SKUIResourceRequest * resourceRequest;
@property(retain) SKUIClientContext * clientContext;
@property(copy) id outputBlock;


- (id)_initSKUILoadResourceOperation;
- (id)resourceRequest;
- (id)initWithResourceRequest:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (void)setOutputBlock:(id)arg1;
- (id)outputBlock;
- (id)init;
- (void).cxx_destruct;
- (void)main;

@end