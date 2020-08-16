package com.example.aula1_imc;

import androidx.appcompat.app.AppCompatActivity;


import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity  { // AppCompatActivity para ter compatilidade com todas as versões
//Java é separado da parte visual.

    EditText txtNome, txtPeso, txtAltura;
    Button btnCalcular;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState); //Super: chamar o método construtor da classe
        setContentView(R.layout.activity_main);// R de resources (pasta res ali <--)- Tudo que é recurso de tela ele coloca nessa variável, inclusive o que eu criei no layout. Essa linha faz a conexão com a parte do layout.

        txtNome = findViewById(R.id.txtNome);
        txtPeso = findViewById(R.id.txtPeso);
        txtAltura = findViewById(R.id.txtAltura);
        btnCalcular = findViewById(R.id.btnCalcular);
    }

    //private: Não devo usar porque o xml n enxerga isso porque ele é um arquivo externo

    public void clickCalcular(View v){
        float peso = Float.valueOf(txtPeso.getText().toString()); // GET TEXT - retorna um negócio que varia, o to string é fixo;
        float altura = Float.valueOf(txtAltura.getText().toString());// Tenho que converter do tipo Editable que o getText retorna para tipo string.
        float imc = peso / (altura*altura);

        Toast.makeText(this, txtNome.getText().toString() + ", seu IMC é " + imc, Toast.LENGTH_SHORT).show(); //Short = 10s


    }
}

