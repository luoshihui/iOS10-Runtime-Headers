/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNArchivedUIState : TSPObject {
    KNUIState *mUIState;
}

@property (nonatomic, readonly) KNUIState *uiState;

- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithUIState:(id)arg1 context:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)uiState;
- (BOOL)validateDesktopViewStateWithDocumentRoot:(id)arg1;
- (BOOL)validateMobileViewStateWithDocumentRoot:(id)arg1;

@end