/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface _WKWebsiteDataStore : NSObject <WKObject> {
    struct ObjectStorage<API::Session> { 
        struct type { 
            unsigned char __lx[24]; 
        } data; 
    } _session;
}

@property(getter=isNonPersistent,readonly) bool nonPersistent;
@property(readonly) struct Object { int (**x1)(); id x2; }* _apiObject;

+ (id)nonPersistentDataStore;
+ (id)defaultDataStore;

- (bool)isNonPersistent;
- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)dealloc;
- (id).cxx_construct;

@end