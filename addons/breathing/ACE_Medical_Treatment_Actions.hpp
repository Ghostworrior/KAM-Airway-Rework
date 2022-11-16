class ACE_Medical_Treatment_Actions {
    class CheckPulse;
    class Pulseoximeter {
        displayName = CSTRING(Pulseoximeter_Display);
        displayNameProgress = CSTRING(placing);
        category = "examine";
        treatmentLocations = 0;
        allowedSelections[] = {"LeftArm", "RightArm"};
        allowSelfTreatment = 1;
        medicRequired = QGVAR(medLvl_Pulseoximeter);
        treatmentTime = 2;
        items[] = {"kat_Pulseoximeter"};
        condition = "kat_breathing_enable && !(_patient getVariable ['kat_breathing_pulseoximeter', false])";
        callbackSuccess = QFUNC(treatmentAdvanced_pulseoximeter);
        callbackFailure = "";
        callbackProgress = "";
        consumeItem = 1;
        animationPatient = "";
        animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
        animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
        animationMedic = "AinvPknlMstpSlayWrflDnon_medicOther";
        animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
        animationMedicSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
        animationMedicSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
        litter[] = {};
    };
    class RemovePulseoximeter {
        displayName = CSTRING(Pulseoximeter_Display_Remove);
        displayNameProgress = CSTRING(remove);
        category = "examine";
        treatmentLocations = 0;
        allowedSelections[] = {"LeftArm", "RightArm"};
        allowSelfTreatment = 1;
        medicRequired = QGVAR(medLvl_Pulseoximeter);
        treatmentTime = 2;
        items[] = {};
        condition = QUOTE(_patient getVariable [ARR_2(QQGVAR(pulseoximeter), false)]);
        callbackSuccess = QFUNC(treatmentAdvanced_removePulseoximeter);
        callbackFailure = "";
        callbackProgress = "";
        consumeItem = 0;
        animationPatient = "";
        animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
        animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
        animationMedic = "AinvPknlMstpSlayWrflDnon_medicOther";
        animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
        animationMedicSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
        animationMedicSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
        litter[] = {};
    };
    class ChestSeal {
        displayName = CSTRING(pneumothorax_display);
        displayNameProgress = CSTRING(treating);
        category = "airway";
        treatmentLocations = 0;
        allowedSelections[] = {"Body"};
        allowSelfTreatment = QGVAR(enable_selfChestseal);
        medicRequired = QGVAR(medLvl_Chestseal);
        treatmentTime = 7;
        items[] = {"kat_chestSeal"};
        condition = QUOTE(!(_patient getVariable [ARR_2(QQEGVAR(airway,recovery),false)]));
        callbackSuccess = QFUNC(treatmentAdvanced_chestSeal);
        callbackFailure = "";
        callbackProgress = "";
        consumeItem = 1;
        animationPatient = "";
        animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
        animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
        animationMedic = "AinvPknlMstpSlayWrflDnon_medicOther";
        animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
        animationMedicSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
        animationMedicSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
        litter[] = {};
    };
    class HemopneumothoraxTreatment {
        displayName = CSTRING(hemopneumothorax_display);
        displayNameProgress = CSTRING(treating);
        category = "airway";
        treatmentLocations = 0;
        allowedSelections[] = {"Body"};
        allowSelfTreatment = 0;
        medicRequired = QGVAR(medLvl_hemopneumothoraxTreatment);
        treatmentTime = 7;
        items[] = {"kat_aatKit"};
        condition = QUOTE(!(_patient getVariable [ARR_2(QQEGVAR(airway,recovery),false)]));
        callbackSuccess = QFUNC(treatmentAdvanced_hemopneumothorax);
        callbackFailure = "";
        callbackProgress = "";
        consumeItem = 1;
        animationPatient = "";
        animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
        animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
        animationMedic = "AinvPknlMstpSlayWrflDnon_medicOther";
        animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
        animationMedicSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
        animationMedicSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
        litter[] = {};
    };
    class TensionpneumothoraxTreatment {
        displayName = CSTRING(tensionpneumothorax_display);
        displayNameProgress = CSTRING(treating);
        category = "airway";
        treatmentLocations = 0;
        allowedSelections[] = {"Body"};
        allowSelfTreatment = 0;
        medicRequired = QGVAR(medLvl_hemopneumothoraxTreatment);
        treatmentTime = 7;
        items[] = {"kat_aatKit"};
        condition = QUOTE(!(_patient getVariable [ARR_2(QQEGVAR(airway,recovery),false)]));
        callbackSuccess = QFUNC(treatmentAdvanced_tensionpneumothorax);
        callbackFailure = "";
        callbackProgress = "";
        consumeItem = 1;
        animationPatient = "";
        animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
        animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
        animationMedic = "AinvPknlMstpSlayWrflDnon_medicOther";
        animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
        animationMedicSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
        animationMedicSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
        litter[] = {};
    };
    class listentolungs: CheckPulse {
        displayName = CSTRING(auscultateLung_display);
        displayNameProgress = CSTRING(listening_progress);
        treatmentTime = 14;
        allowedSelections[] = {"Body"};
        allowSelfTreatment = 0;
        category = "airway";
        medicRequired = 0;
        consumeItem = 0;
        callbackStart = QUOTE([ARR_2(_medic, _patient)] spawn FUNC(listenLungs));
        callbackSuccess = "";
        callbackProgress = "";
        condition = "true";
        items[] = {"kat_stethoscope"};
        animationPatient = "";
        animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
        animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
    };
    class CheckCyanosis: CheckPulse{
        displayName = CSTRING(CheckCyanosis_Name);
        displayNameProgress = CSTRING(CheckCyanosis_Progress);
        treatmentTime = 3;
        allowedSelections[] = {"Head", "LeftArm", "RightArm"};
        allowSelfTreatment = 1;
        medicRequired = QGVAR(medLvl_Cyanosis);
        condition = QGVAR(enableCyanosis);
        callbackSuccess = QFUNC(treatmentAdvanced_Cyanosis);
    };
};
