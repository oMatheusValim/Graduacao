import pandas as pd
from sklearn.preprocessing import MinMaxScaler
import sweetviz as sv

base = pd.read_csv('Steel_industry_data_task.csv')

print(base.info()) # informações gerais dos atributos da base

media_Usage_kWh = base['Usage_kWh'].mean() # calcula o valor médio
base['Usage_kWh'] = base['Usage_kWh'].fillna(media_Usage_kWh) # substitui nos valores vazios

normalizar = MinMaxScaler(feature_range=(0,1)) # normaliza os dados no intervalo
base['Usage_kWh'] = normalizar.fit_transform(base[['Usage_kWh']]) # substitui
base['Usage_kWh'] = base['Usage_kWh'].round(2) #arredonda

mediana_Lagging_Current_Reactive_Power_kVarh = base['Lagging_Current_Reactive.Power_kVarh'].median() # calcular a mediana
base['Lagging_Current_Reactive.Power_kVarh'] = base['Lagging_Current_Reactive.Power_kVarh'].fillna  (mediana_Lagging_Current_Reactive_Power_kVarh) # substitui

mediana_Leading_Current_Reactive_Power_kVarh = base['Leading_Current_Reactive_Power_kVarh'].median() # calcular a mediana
base['Leading_Current_Reactive_Power_kVarh'] = base['Leading_Current_Reactive_Power_kVarh'].fillna  (mediana_Leading_Current_Reactive_Power_kVarh) # substitui

report = sv.analyze(base) # relatório interativo
report.show_html("relatorio_Steel_industry_data_task.html") # cria um arquivo do relatório