/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class GSPermanentStorage, NSMutableArray, NSMutableDictionary;

@interface BRNonLocalVersionReceiver : NSObject <BRNonLocalVersionReceiving> {
    NSMutableArray *_versions;
    NSMutableDictionary *_versionsByURL;
    GSPermanentStorage *_versionsStore;
}


- (oneway void)newVersionAtURL:(id)arg1 faultURL:(id)arg2 faultExtension:(id)arg3 etag:(id)arg4 lastEditorDeviceName:(id)arg5;
- (bool)setVersionStoreForDocumentAtURL:(id)arg1 error:(id*)arg2;
- (id)initWithVersionArray:(id)arg1;
- (void)dealloc;

@end