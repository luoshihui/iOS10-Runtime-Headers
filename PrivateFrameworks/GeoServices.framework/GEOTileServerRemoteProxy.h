/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSHashTable, NSObject<OS_xpc_object>, NSLock, NSObject<OS_dispatch_queue>;

@interface GEOTileServerRemoteProxy : GEOTileServerProxy  {
    NSObject<OS_dispatch_queue> *_connQueue;
    NSObject<OS_xpc_object> *_conn;
    NSLock *_connLock;
    int _suspendCount;
    unsigned long long _handleCounter;
    NSHashTable *_cancellingConnections;
    NSLock *_cancellingConnectionsLock;
}


- (void)_handleEvent:(id)arg1 fromConnection:(id)arg2;
- (void)_handleEditionUpgrade:(id)arg1;
- (void)_handleNetworkBegan:(id)arg1;
- (void)_handleError:(id)arg1;
- (void)_handleTile:(id)arg1;
- (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;
- (void)flushPendingWrites;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (void)endPreloadSession;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;
- (void)loadTiles:(id)arg1 priorities:(unsigned int*)arg2 options:(unsigned int)arg3 client:(id)arg4;
- (void)reportCorruptTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)cancel:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)init;
- (void)close;
- (void)open;
- (void)dealloc;

@end