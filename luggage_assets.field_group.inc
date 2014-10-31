<?php
/**
 * @file
 * luggage_assets.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function luggage_assets_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_asset_contact_person|node|asset|form';
  $field_group->group_name = 'group_asset_contact_person';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'asset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Asset Contact Person',
    'weight' => '16',
    'children' => array(
      0 => 'field_asset_contact_person',
      1 => 'field_asset_contact_address',
      2 => 'field_asset_contact_phone_number',
      3 => 'field_asset_contact_net_id',
      4 => 'field_asset_address_line_2',
      5 => 'field_asset_contact_city',
      6 => 'field_asset_contact_state',
      7 => 'field_asset_contact_zip_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-asset-contact-person field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_asset_contact_person|node|asset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_asset_owner|node|asset|form';
  $field_group->group_name = 'group_asset_owner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'asset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Asset Owner',
    'weight' => '15',
    'children' => array(
      0 => 'field_asset_location',
      1 => 'field_asset_city',
      2 => 'field_asset_state',
      3 => 'field_asset_zip_code',
      4 => 'field_asset_location_2',
      5 => 'field_asset_owner',
      6 => 'field_asset_net_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-asset-owner field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_asset_owner|node|asset|form'] = $field_group;

  return $export;
}
