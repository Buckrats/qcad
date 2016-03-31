// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMASHAREDPOINTERLAYOUT_H
        #define RECMASHAREDPOINTERLAYOUT_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RLayout.h"
            
            typedef QSharedPointer<RLayout> RLayoutPointer;
        

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaSharedPointerLayout {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRObject(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        init
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTabOrder
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setTabOrder
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMinLimits
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMinLimits
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMaxLimits
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaxLimits
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setInsertionBase
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getInsertionBase
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMinExtents
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMinExtents
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMaxExtents
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaxExtents
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSelectedForPropertyEditing
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RLayout* getSelf(const QString& fName, QScriptContext* context)
    ;static RLayout* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue data
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue isNull
    (QScriptContext *context, QScriptEngine *engine)
    ;};
    #endif
    