#define __uqmi_dms_commands												\
	__uqmi_command(dms_get_pin_status, get-pin-status, no, QMI_SERVICE_DMS), \
	__uqmi_command(dms_verify_pin1, verify-pin1, required, QMI_SERVICE_DMS), \
	__uqmi_command(dms_verify_pin2, verify-pin2, required, QMI_SERVICE_DMS), \
	__uqmi_command(dms_set_pin1_protection, set-pin1-protection, required, QMI_SERVICE_DMS), \
	__uqmi_command(dms_set_pin2_protection, set-pin2-protection, required, QMI_SERVICE_DMS), \
	__uqmi_command(dms_set_pin, pin, required, CMD_TYPE_OPTION), \
	__uqmi_command(dms_change_pin1, change-pin1, no, QMI_SERVICE_DMS), \
	__uqmi_command(dms_change_pin2, change-pin2, no, QMI_SERVICE_DMS), \
	__uqmi_command(dms_unblock_pin1, unblock-pin1, no, QMI_SERVICE_DMS), \
	__uqmi_command(dms_unblock_pin2, unblock-pin2, no, QMI_SERVICE_DMS), \
	__uqmi_command(dms_set_puk, puk, required, CMD_TYPE_OPTION), \
	__uqmi_command(dms_set_new_pin, new-pin, required, CMD_TYPE_OPTION), \
	__uqmi_command(dms_get_iccid, get-iccid, no, QMI_SERVICE_DMS), \
	__uqmi_command(dms_get_imsi, get-imsi, no, QMI_SERVICE_DMS), \
	__uqmi_command(dms_get_msisdn, get-msisdn, no, QMI_SERVICE_DMS), \
	__uqmi_command(dms_set_operating_mode, set-device-operating-mode, required, QMI_SERVICE_DMS), \
	__uqmi_command(dms_reset, reset-dms, no, QMI_SERVICE_DMS) \

#define dms_helptext \
		"  --get-pin-status:                 Get PIN verification status\n" \
		"  --verify-pin1 <pin>:              Verify PIN1\n" \
		"  --verify-pin2 <pin>:              Verify PIN2\n" \
		"  --set-pin1-protection <state>:    Set PIN1 protection state (disabled, enabled)\n" \
		"    --pin <pin>:                    PIN1 needed to change state\n" \
		"  --set-pin2-protection <state>:    Set PIN2 protection state (disabled, enabled)\n" \
		"    --pin <pin2>:                   PIN2 needed to change state\n" \
		"  --change-pin1:                    Change PIN1\n" \
		"    --pin <old pin>:                Current PIN1\n" \
		"    --new-pin <new pin>:            New pin\n" \
		"  --change-pin2:                    Change PIN2\n" \
		"    --pin <old pin>:                Current PIN2\n" \
		"    --new-pin <new pin>:            New pin\n" \
		"  --unblock-pin1:                   Unblock PIN1\n" \
		"    --puk <puk>:                    PUK needed to unblock\n" \
		"    --new-pin <new pin>:            New pin\n" \
		"  --unblock-pin2:                   Unblock PIN2\n" \
		"    --puk <puk>:                    PUK needed to unblock\n" \
		"    --new-pin <new pin>:            New pin\n" \
		"  --get-iccid:                      Get the ICCID\n" \
		"  --get-imsi:                       Get International Mobile Subscriber ID\n" \
		"  --get-msisdn:                     Get the MSISDN (telephone number)\n" \
		"  --reset-dms:                      Reset the DMS service\n" \
		"  --set-device-operating-mode <m>   Set the device operating mode\n" \
		"                                    (modes: online, low_power, factory_test, offline\n" \
		"                                     reset, shutting_down, persistent_low_power,\n" \
		"                                     mode_only_low_power)\n" \

